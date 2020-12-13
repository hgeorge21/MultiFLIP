#include <Eigen/Core>
#include <Eigen/Sparse>

void interpolate(
    const int nx,
    const int ny,
    const int nz,
    const double h,
    const Eigen::RowVector3d& corner,
    const Eigen::MatrixXd &q,
    Eigen::SparseMatrix<double>& W);