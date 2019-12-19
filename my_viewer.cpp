
# include "my_viewer.h"

# include <sigogl/ui_button.h>
# include <sigogl/ui_radio_button.h>
# include <sig/sn_primitive.h>
# include <sig/sn_transform.h>
# include <sig/sn_manipulator.h>
# include <sigogl/ws_run.h>
GsMat tran;
float pi = 3.14f;
float xcam = 0;
float zcam = 0;


MyViewer::MyViewer(int x, int y, int w, int h, const char* l) : WsViewer(x, y, w, h, l)
{
	_nbut = 0;
	_animating = false;
	build_ui();
	build_scene();
	cmd(WsViewer::VCmdAsIs);
}


void MyViewer::rotate(int num, int o) {
	SnManipulator* manip = e->get<SnManipulator>(2); // access one of the manipulators
	SnManipulator* manip2 = e->get<SnManipulator>(3); // access one of the manipulators
	SnManipulator* manip3 = e->get<SnManipulator>(4); // access one of the manipulators
	SnManipulator* manip4 = e->get<SnManipulator>(5); // access one of the manipulators
	SnManipulator* manip5 = e->get<SnManipulator>(6); // access one of the manipulators
	SnManipulator* manip6 = e->get<SnManipulator>(7); // access one of the manipulators
	SnManipulator* manip7 = e->get<SnManipulator>(8); // access one of the manipulators
	SnManipulator* manip8 = e->get<SnManipulator>(9); // access one of the manipulators
	SnManipulator* manip9 = e->get<SnManipulator>(10); // access one of the manipulators
	SnManipulator* manip10 = e->get<SnManipulator>(11); // access one of the manipulators
	SnManipulator* manip11 = e->get<SnManipulator>(0); // access one of the manipulators


	//shadow manips
	SnManipulator* manips = sh->get<SnManipulator>(2); // access one of the manipulators
	SnManipulator* manip2s = sh->get<SnManipulator>(3); // access one of the manipulators
	SnManipulator* manip3s = sh->get<SnManipulator>(4); // access one of the manipulators
	SnManipulator* manip4s = sh->get<SnManipulator>(5); // access one of the manipulators
	SnManipulator* manip5s = sh->get<SnManipulator>(6); // access one of the manipulators
	SnManipulator* manip6s = sh->get<SnManipulator>(7); // access one of the manipulators
	SnManipulator* manip7s = sh->get<SnManipulator>(8); // access one of the manipulators
	SnManipulator* manip8s = sh->get<SnManipulator>(9); // access one of the manipulators
	SnManipulator* manip9s = sh->get<SnManipulator>(10); // access one of the manipulators
	SnManipulator* manip10s = sh->get<SnManipulator>(11); // access one of the manipulators
	SnManipulator* manip11s = sh->get<SnManipulator>(0); // access one of the manipulators






	if (num == 12 && o == 1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc + 5, 0);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc + 5, 0);
			manip12->initial_mat(tran * manip12->mat());
		}
	}
	if (num == 12 && o == -1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc - 5, 0);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc - 5, 0);
			manip12->initial_mat(tran * manip12->mat());
		}
	}
	if (num == 13 && o == 1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc + 5, 0, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc + 5, 0, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
	}
	if (num == 13 && o == -1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc - 5, 0, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc - 5, 0, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
	}
	if (num == 14 && o == 1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc , zinc+5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc , zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 14 && o == -1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

		if (num == 14 && o == 1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc , zinc+5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc , zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 14 && o == -1) {
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 1 && o == 1) {
		for (int ind = 0; ind <= 1; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 1; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 1 && o == -1) {
		for (int ind = 0; ind <= 1; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 0; ind <= 1; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}


	if (num == 2 && o == 1) {
		for (int ind = 1; ind <= 3; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 1; ind <= 3; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 2 && o == -1) {
		for (int ind = 1; ind <= 3; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 1; ind <= 3; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 3 && o == 1) {
		for (int ind = 4; ind <= 4; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 4; ind <= 4; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 3 && o == -1) {
		for (int ind = 4; ind <= 4; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 4; ind <= 4; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 4 && o == 1) {
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc + 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 4 && o == -1) {
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc, yinc, zinc - 5);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 5 && o == 1) {
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc+5, yinc, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc+5, yinc, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

	if (num == 5 && o == -1) {
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = e->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc-5, yinc, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
		for (int ind = 5; ind <= 5; ind++) {
			SnManipulator* manip12 = sh->get<SnManipulator>(ind); // access one of the manipulators
			tran.translation(xinc-5, yinc, zinc);
			manip12->initial_mat(tran * manip12->mat());
		}
	}

}



void MyViewer::build_ui()
{
	UiPanel* p, * sp;
	UiManager* uim = WsWindow::uim();
	p = uim->add_panel("", UiPanel::HorizLeft);
	p->add(new UiButton("View", sp = new UiPanel()));
	{	UiPanel* p = sp;
	p->add(_nbut = new UiCheckButton("Normals", EvNormals));
	}
	p->add(new UiButton("Animate", EvAnimate));
	p->add(new UiButton("Exit", EvExit)); p->top()->separate();
}

void MyViewer::add_model(SnShape* s, GsVec p)
{
	SnManipulator* manip = new SnManipulator;
	GsMat m;
	//new SnTransform
	m.translation(p);
	manip->initial_mat(m);

	SnGroup* g = new SnGroup;
	SnLines* l = new SnLines;
	l->color(GsColor::orange);
	g->add(s);
	g->add(l);
	manip->child(g);
	manip->visible(false);
	e->add(manip);
}

void MyViewer::camera_view() {// camrera view that flips wiggles and moves on the z and x axis
	for (float t = 0; t <= 0.000001 * pi; t += (2 * pi) / 1000) {
		camera().eye.x = (float)cos(6 * t);
		camera().eye.z = -6 * t;
		render();
		ws_check();
	}
}
void MyViewer::static_view() {//static camera view
	camera().eye.x = 0;
	camera().eye.y = 15;
	camera().eye.z = 20;
	render();
}

void MyViewer::add_shadow_model(SnShape* s, GsVec p)
{
	SnManipulator* manip = new SnManipulator;
	GsMat m;
	//new SnTransform (maybe use this another day)
	m.translation(p);
	manip->initial_mat(m);

	SnGroup* g = new SnGroup;
	SnLines* l = new SnLines;
	l->color(GsColor::orange);
	g->add(s);
	g->add(l);
	manip->child(g);

	sh->add(manip);
	//make new group for shadow in add shadow function
}

void MyViewer::build_scene()
{


	float  dot;
	float  shadow[16];
	dot = ground[0] * light[0] +
		ground[1] * light[1] +
		ground[2] * light[2] +
		ground[3] * light[3];
	shadow[0] = dot - light[0] * ground[0];
	shadow[1] = 0.0f - light[0] * ground[1];
	shadow[2] = 0.0f - light[0] * ground[2];
	shadow[3] = 0.0f - light[0] * ground[3];

	shadow[4] = 0.0f - light[1] * ground[0];
	shadow[5] = dot - light[1] * ground[1];
	shadow[6] = 0.0f - light[1] * ground[2];
	shadow[7] = 0.0f - light[1] * ground[3];

	shadow[8] = 0.0f - light[2] * ground[0];
	shadow[9] = 0.0f - light[2] * ground[1];
	shadow[10] = dot - light[2] * ground[2];
	shadow[11] = 0.0f - light[2] * ground[3];

	shadow[12] = 0.0f - light[3] * ground[0];
	shadow[13] = 0.0f - light[3] * ground[1];
	shadow[14] = 0.0f - light[3] * ground[2];
	shadow[15] = dot - light[3] * ground[3];
	shadowMat.set(shadow);
	SnManipulator* r = new SnManipulator;
	r->visible(false);
	tran.translation(0, 8.5f, 0);
	r->initial_mat(tran);
	r->child(e);
	rootg()->add(r);

	SnManipulator* rs = new SnManipulator;
	rs->visible(false);
	tran.translation(0, 8.5f, 0);
	rs->initial_mat(tran);
	rs->child(sh);
	rootg()->add(rs);

	GsMaterial shadowMaterial;//sets materials to black
	shadowMaterial.init(GsColor::black, GsColor::black, GsColor::black, GsColor::black, 0.0f);

	//SHADOWS
	SnPrimitive* s1s;
	s1s = new SnPrimitive(GsPrimitive::Box, 40, 40, 10);
	s1s->prim().material.diffuse = GsColor::black;
	add_model(s1s, GsVec(-200, 100, 0));
	SnManipulator* manip = e->get<SnManipulator>(0); // access one of the manipulators
	manip->visible(false);

	SnPrimitive* s2s;
	s2s = new SnPrimitive(GsPrimitive::Box, 0, 0, 0);
	s2s->prim().material.diffuse = GsColor::black;
	add_model(s2s, GsVec(200, 100, 0));
	SnManipulator* manip2 = e->get<SnManipulator>(1); // access one of the manipulators
	manip2->visible(false);


	SnPrimitive* s3s;
	s3s = new SnPrimitive(GsPrimitive::Sphere, 40, 40, 10);
	s3s->prim().material.diffuse = GsColor::black;
	add_model(s3s, GsVec(-95, 100, 0));
	SnManipulator* manip3 = e->get<SnManipulator>(2); // access one of the manipulators
	manip3->visible(false);



	SnPrimitive* s4s;
	s4s = new SnPrimitive(GsPrimitive::Capsule, 40, 40, 10);
	s4s->prim().material.diffuse = GsColor::black;
	add_model(s4s, GsVec(-5, 100, 0));
	SnManipulator* manip4 = e->get<SnManipulator>(3); // access one of the manipulators
	manip4->visible(false);


	SnPrimitive* s5s;
	s5s = new SnPrimitive(GsPrimitive::Cylinder, 40, 40, 40);
	s5s->prim().material.diffuse = GsColor::black;
	add_model(s5s, GsVec(95, 100, 0));
	SnManipulator* manip5 = e->get<SnManipulator>(4); // access one of the manipulators
	manip5->visible(false);


	SnPrimitive* s6s;
	s6s = new SnPrimitive(GsPrimitive::Sphere, 40, 40, 0);
	s6s->prim().material.diffuse = GsColor::black;
	add_model(s6s, GsVec(200, 100, 0));
	SnManipulator* manip6 = e->get<SnManipulator>(5); // access one of the manipulators
	manip6->visible(false);


	SnPrimitive* s7s;
	s7s = new SnPrimitive(GsPrimitive::Box, 0, 0, 0);
	s7s->prim().material.diffuse = GsColor::black;
	add_model(s7s, GsVec(0, -50, 0));
	SnManipulator* manip11 = e->get<SnManipulator>(10); // access one of the manipulators
	manip11->visible(false);

	/*SnPrimitive* s8s;
	s8s = new SnPrimitive(GsPrimitive::Sphere, 0, 0, 0);
	s8s->prim().material.diffuse = GsColor::black;
	add_model(s7s, GsVec(600, 100, 0));
	SnManipulator* manip7 = e->get<SnManipulator>(10); // access one of the manipulators
	manip7->visible(false);*/

	//OBJECTS
	SnPrimitive* s1;
	s1 = new SnPrimitive(GsPrimitive::Box, 40, 40, 10);
	s1->prim().material.diffuse = GsColor::white;
	add_shadow_model(s1, GsVec(-200, 100, 0));
	SnManipulator* manips = e->get<SnManipulator>(0); // access one of the manipulators
	manips->visible(false);
	manips->initial_mat(shadowMat* manip->mat());


	SnPrimitive* s2;
	s2 = new SnPrimitive(GsPrimitive::Box, 0, 0, 0);
	s2->prim().material.diffuse = GsColor::white;
	add_shadow_model(s2, GsVec(200, 100, 0));
	SnManipulator* manip2s = e->get<SnManipulator>(1); // access one of the manipulators
	manip2s->visible(false);
	manip2s->initial_mat(shadowMat* manip2->mat());


	SnPrimitive* s3;
	s3 = new SnPrimitive(GsPrimitive::Sphere, 40, 40, 10);
	s3->prim().material.diffuse = GsColor::brown;
	add_shadow_model(s3, GsVec(-95, 100, 0));
	SnManipulator* manip3s = e->get<SnManipulator>(2); // access one of the manipulators
	manip3s->visible(false);
	manip3s->initial_mat(shadowMat* manip3->mat());


	SnPrimitive* s4;
	s4 = new SnPrimitive(GsPrimitive::Capsule, 40, 40, 10);
	s4->prim().material.diffuse = GsColor::yellow;
	add_shadow_model(s4, GsVec(-5, 100, 0));
	SnManipulator* manip4s = e->get<SnManipulator>(3); // access one of the manipulators
	manip4s->visible(false);
	manip4s->initial_mat(shadowMat* manip4->mat());


	SnPrimitive* s5;
	s5 = new SnPrimitive(GsPrimitive::Cylinder, 40, 40, 40);
	s5->prim().material.diffuse = GsColor::green;
	add_shadow_model(s5, GsVec(95, 100, 0));
	SnManipulator* manip5s = e->get<SnManipulator>(4); // access one of the manipulators
	manip5s->visible(false);
	manip5s->initial_mat(shadowMat* manip5->mat());

	SnPrimitive* s6;
	s6 = new SnPrimitive(GsPrimitive::Sphere, 40, 40, 0);
	s6->prim().material.diffuse = GsColor::blue;
	add_shadow_model(s6, GsVec(200, 100, 0));
	SnManipulator* manip6s = e->get<SnManipulator>(5); // access one of the manipulators
	manip6s->visible(false);
	manip6s->initial_mat(shadowMat* manip6->mat());


	SnPrimitive* s7;
	s7 = new SnPrimitive(GsPrimitive::Box, 350, 1, 350);
	s7->prim().material.diffuse = GsColor::darkred;
	add_shadow_model(s7, GsVec(0, -15, 0));
	SnManipulator* manip11s = e->get<SnManipulator>(10); // access one of the manipulators
	manip11s->visible(false);
	manip11s->initial_mat(shadowMat* manip11->mat());

	/*SnPrimitive* s8;
	s8 = new SnPrimitive(GsPrimitive::Sphere, 0, 0, 0);
	s8->prim().material.diffuse = GsColor::blue;
	add_shadow_model(s8, GsVec(6000, 100, 0));
	SnManipulator* manip7s = e->get<SnManipulator>(10); // access one of the manipulators
	manip7s->visible(false);
	manip7s->initial_mat(shadowMat* manip7->mat());*/





}

// Below is an example of how to control the main loop of an animation:
void MyViewer::run_animation()
{
	_animating = true;

	int ind = 0; // pick one child

	double frame_count = 0;
	double frdt = 1.0 / 30.0; // delta time to reach given number of frames per second
							  //double v = 4; // target velocity is 1 unit per second
	double t = 0, lt = 0, t0 = gs_time();
	do // run for a while:
	{
		while (t - lt < frdt) { ws_check(); t = gs_time() - t0; } // wait until it is time for next frame

		lt = t;
		if (frame_count >= 0 && frame_count <= 10) {
			rotate(3, 1);
			rotate(6, 1);

		}
		if (frame_count > 11 && frame_count <= 30) {
			rotate(2, 1);
			rotate(5, 1);

		}
		if (frame_count > 31 && frame_count <= 40) {
			rotate(2, -1);
			rotate(5, -1);

		}
		if (frame_count > 40 && frame_count <= 60) {
			rotate(1, -1);
			rotate(4, -1);

		}

		if (frame_count == 60)
			_animating = false;
		frame_count++;
		render(); // notify it needs redraw
		ws_check(); // redraw now
	} while (_animating);
}

void MyViewer::show_normals(bool b)
{
	// Note that primitives are only converted to meshes in GsModel
	// at the first draw call.
	GsArray<GsVec> fn;
	SnGroup* r = (SnGroup*)root();
	for (int k = 0; k < r->size(); k++)
	{
		SnManipulator* manip = r->get<SnManipulator>(k);
		SnShape* s = manip->child<SnGroup>()->get<SnShape>(0);
		SnLines* l = manip->child<SnGroup>()->get<SnLines>(1);
		if (!b) { l->visible(false); continue; }
		l->visible(true);
		if (!l->empty()) continue; // build only once
		l->init();
		if (s->instance_name() == SnPrimitive::class_name)
		{
			GsModel& m = *((SnModel*)s)->model();
			m.get_normals_per_face(fn);
			const GsVec* n = fn.pt();
			float f = 0.33f;
			for (int i = 0; i < m.F.size(); i++)
			{
				const GsVec& a = m.V[m.F[i].a]; l->push(a, a + (*n++) * f);
				const GsVec& b = m.V[m.F[i].b]; l->push(b, b + (*n++) * f);
				const GsVec& c = m.V[m.F[i].c]; l->push(c, c + (*n++) * f);
			}
		}
	}
}

int MyViewer::handle_keyboard(const GsEvent& e)
{
	int ret = WsViewer::handle_keyboard(e); // 1st let system check events
	if (ret) return ret;

	switch (e.key)
	{
	case GsEvent::KeyEsc: gs_exit(); return 1;
	case 'n': { bool b = !_nbut->value(); _nbut->value(b); show_normals(b); return 1; }
	default: gsout << "Key pressed: " << e.key << gsnl;
	case GsEvent::KeyUp:rotate(12, 1); render(); return 1;
	case GsEvent::KeyDown:rotate(12, -1); render(); return 1;
	case GsEvent::KeyRight:rotate(13, 1); render(); return 1;
	case GsEvent::KeyLeft:rotate(13, -1); render(); return 1;
	case 'q':rotate(1, 1); render(); return 1;
	case 'w':rotate(1, -1); render(); return 1;
	case 'e':rotate(2, 1); render(); return 1;
	case 'r':rotate(2, -1); render(); return 1;
	case 't':rotate(3, 1); render(); return 1;
	case 'y':rotate(3, -1); render(); return 1;
	case 'u':rotate(4, 1); render(); return 1;
	case 'i':rotate(4, -1); render(); return 1;

	case '2':rotate(5, 1); render(); return 1;
	case '1':rotate(5, -1); render(); return 1;


	case 'z':rotate(14, 1); render(); return 1;
	case 'x':rotate(14, -1); render(); return 1;
	case GsEvent::KeySpace:
	{ cam = !cam;
	if (!cam) {
		camera_view();
	}
	else {
		static_view();
	}return 1;
	}

	return 0;
	}
}
int MyViewer::uievent(int e)
{
	switch (e)
	{
	case EvNormals: show_normals(_nbut->value()); return 1;
	case EvAnimate: run_animation(); return 1;
	case EvExit: gs_exit();
	}
	return WsViewer::uievent(e);
}
