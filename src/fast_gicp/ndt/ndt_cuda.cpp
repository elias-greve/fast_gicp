#include <fast_gicp/ndt/ndt_cuda.hpp>
#include <fast_gicp/ndt/impl/ndt_cuda_impl.hpp>

template
class fast_gicp::NDTCuda<pcl::PointXYZ, pcl::PointXYZ>;

template
class fast_gicp::NDTCuda<pcl::PointXYZINormal, pcl::PointXYZINormal>;

template
class fast_gicp::NDTCuda<pcl::PointNormal, pcl::PointNormal>;
