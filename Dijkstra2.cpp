//
// Created by ariad on 26/1/2021.
//

#include "Dijkstra2.h"

void DijkstraAlgorithm::insertVertex(char letter, const unordered_map<char, int> &weight) {
    vertices.insert(unordered_map<char, const unordered_map<char, int>>::value_type(letter, weight));
}

vector<char> DijkstraAlgorithm::dijkstraAlgorithm(char beginning, char ending) {
    unordered_map<char, int> length;
    unordered_map<char, char> initial;
    vector<char> nodes;
    vector<char> track; 

    auto aux = [&] (char left, char right) { return length[left] > length[right]; };

    for (auto& vertex : vertices)
    {
        if (vertex.first == beginning)
        {
            length[vertex.first] = 0;
        }
        else
        {
            length[vertex.first] = numeric_limits<int>::max();
        }

        nodes.push_back(vertex.first);
        push_heap(begin(nodes), end(nodes), aux);
    }

    while (!nodes.empty())
    {
        pop_heap(begin(nodes), end(nodes), aux);
        char smallest = nodes.back();
        nodes.pop_back();

        std::cout << "Open list: ";
        for( std::vector<char>::const_iterator i = nodes.begin(); i != nodes.end(); ++i)
            std::cout << *i << ' ';
        std::cout << std::endl;

        if (smallest == ending)
        {
            while (initial.find(smallest) != end(initial))
            {
                track.push_back(smallest);
                smallest = initial[smallest];
                std::cout << "Closed list: ";
                for( std::vector<char>::const_iterator i = track.begin(); i != track.end(); ++i)
                    std::cout << *i << ' ';
                std::cout << std::endl;
            }

            break;
        }

        if (length[smallest] == numeric_limits<int>::max())
        {
            break;
        }

        for (auto& neighbor : vertices[smallest])
        {
            int alt = length[smallest] + neighbor.second;
            if (alt < length[neighbor.first])
            {
                length[neighbor.first] = alt;
                initial[neighbor.first] = smallest;
                make_heap(begin(nodes), end(nodes), aux);
            }
        }
    }

    return track;
}



