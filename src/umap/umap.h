/**
 * @brief Uniform Manifold Approximation and Projection (UMAP) algorithm.
 *
 * UMAP is a dimensionality reduction technique that is used for visualizing
 * high-dimensional data in a lower-dimensional space. It aims to preserve both
 * local and global structure of the data, making it useful for various machine
 * learning tasks. UMAP is particularly effective in preserving non-linear
 * relationships in the data.
 *
 * This class represents the UMAP algorithm and provides methods for performing
 * UMAP embedding.
 * 
 * @references
 * 1. https://umap-learn.readthedocs.io/en/latest/
 * 
 * @assumptions
 * - Data is uniformly distributed on Riemannian manifold.
 * - The Riemannian metric is locally constant (or can be approximated as such).
 * - The manifold is locally connected.
 */
#pragma once

#include <cstdint>

class UMAP {
public:
    std::uint32_t random_state = 42;
    
};