// // Double
//
m.def("union", []
	(
		const Eigen::MatrixXd& VA,
		const Eigen::MatrixXi& FA,
		const Eigen::MatrixXd& VB,
		const Eigen::MatrixXi& FB,
		Eigen::MatrixXd& VC,
		Eigen::MatrixXi& FC
		)
{
	return igl::copyleft::boolean::mesh_boolean(VA, FA, VB, FB, igl::copyleft::boolean::MeshBooleanType::MESH_BOOLEAN_TYPE_UNION, VC, FC);
}, __doc_igl_boolean,
py::arg("VA"), py::arg("FA"), py::arg("VB"), py::arg("FB"), py::arg("VC"), py::arg("FC"));