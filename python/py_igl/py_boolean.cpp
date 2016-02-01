// // Double
//
m.def("boolean", []
	(
		const Eigen::MatrixXd& VA,
		const Eigen::MatrixXi& FA,
		const Eigen::MatrixXd& VB,
		const Eigen::MatrixXi& FB,
		const igl::copyleft::boolean::MeshBooleanType& boolean_type
		Eigen::MatrixXd& VC,
		Eigen::MatrixXi& FC,
		)
{
	return igl::copyleft::boolean::mesh_boolean(VA, FA, VB, FB, boolean_type, VC, FC);
}, __doc_igl_boolean,
py::arg("VA"), py::arg("FA"), py::arg("VB"), py::arg("FB"), py::arg("boolean_type"), py::arg("VC"), py::arg("FC"));