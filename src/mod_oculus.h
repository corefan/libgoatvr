#ifndef MOD_OCULUS_H_
#define MOD_OCULUS_H_

#include <OVR_CAPI.h>
#include <OVR_CAPI_GL.h>
#include "module.h"

namespace goatvr {

class ModuleOculus : public Module {
protected:
	RenderTexture rtex;
	ovrSession ovr;
	ovrGraphicsLuid ovr_luid;

public:
	ModuleOculus();

	bool init();
	void destroy();

	ModuleType get_type() const;
	const char *get_name() const;

	void detect();

	void start();
	void stop();

	RenderTexture *get_render_texture(float fbscale);

	void draw_eye(int eye);
	void draw_done();

	Mat4 get_view_matrix(int eye);
	Mat4 get_proj_matrix(int eye);
};

}	// namespace goatvr

#endif	// MOD_OCULUS_H_