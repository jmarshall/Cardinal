
#ifndef CARDINAL
#define CARDINAL

#define R_NO_REMAP

extern "C"
{
  #include <Rinternals.h>
}

#include "utils.h"

extern "C" {

    // DIP

    SEXP gaussianFilter(SEXP x, SEXP r, SEXP sd);

    SEXP bilateralFilter(SEXP x, SEXP r, SEXP sd);

    // dynAlign

    SEXP dynAlign(SEXP similarity, SEXP score, SEXP tracking, SEXP gap);

    // imzML

    SEXP readImzML(SEXP filepath);

    SEXP writeImzML(SEXP metadata, SEXP tmpl, SEXP filepath);

    // localMaxima

    SEXP localMaxima(SEXP x, SEXP r);

    // spatial

    SEXP findNeighbors(SEXP coord, SEXP r, SEXP group, SEXP dist);

    SEXP findSpatialBlocks(SEXP coord, SEXP r, SEXP group, SEXP block_info);

    SEXP whichSpatialBlocks(SEXP neighbors, SEXP blocks);

    SEXP spatialOffsets(SEXP coord, SEXP neighbors, SEXP k);

    SEXP spatialWeights(SEXP x, SEXP offsets, SEXP sigma, SEXP bilateral);

    SEXP spatialDistance(SEXP x, SEXP y, SEXP x_offsets, SEXP y_offsets,
        SEXP x_weights, SEXP y_weights, SEXP tol_dist);

    SEXP spatialScores(SEXP x, SEXP ref, SEXP weights, SEXP sd);

    SEXP spatialFilter(SEXP x, SEXP neighbors, SEXP weights);

}


#endif
