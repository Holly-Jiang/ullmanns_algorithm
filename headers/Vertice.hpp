//
// Created by ctsnz0060 on 24.07.2018.
//

#ifndef ULLMANNS_ALGORITHM_VERTICE_HPP
#define ULLMANNS_ALGORITHM_VERTICE_HPP

#include <vector>

class Vertice{
private:
    int m_id;
    int m_degree;
    std::vector<Vertice*> m_adjacencyList;

public:
    explicit Vertice(int id): m_id(id) { m_degree = 0; };
    void addNeigborhood(Vertice*);

    const std::vector<Vertice *> getNeigborhood(void) const;
    const int getId(void) const;
    const int getDegree(void) const;
};


#endif //ULLMANNS_ALGORITHM_VERTICE_HPP
