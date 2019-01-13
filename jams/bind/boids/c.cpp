#include <infra/Api.h>
#include <jobs/Api.h>
#include <type/Api.h>
#include <tree/Api.h>
#include <pool/Api.h>
#include <refl/Api.h>
#include <ecs/Api.h>
#include <srlz/Api.h>
#include <math/Api.h>
#include <geom/Api.h>
#include <noise/Api.h>
#include <wfc/Api.h>
#include <fract/Api.h>
#include <lang/Api.h>
#include <ctx/Api.h>
#include <ui/Api.h>
#include <uio/Api.h>
#include <bgfx/Api.h>
#include <gfx/Api.h>
#include <gfx-pbr/Api.h>
#include <gfx-obj/Api.h>
#include <gltf/Api.h>
#include <gfx-gltf/Api.h>
#include <gfx-ui/Api.h>
#include <gfx-edit/Api.h>
#include <tool/Api.h>
#include <wfc-gfx/Api.h>
#include <core/Api.h>
#include <util/Api.h>
#include <core/Api.h>
#include <visu/Api.h>
#include <edit/Api.h>
#include <block/Api.h>
#include <shell/Api.h>
#include <boids/Api.h>

#ifdef MUD_PLATFORM_EMSCRIPTEN
#include <emscripten.h>
#define DECL EMSCRIPTEN_KEEPALIVE
#else
#define DECL
#endif


extern "C" {
	
	// Boid
	boids::Boid* DECL boids_Boid_Boid_0() {
		return new boids::Boid();
	}
	void DECL boids_Boid__destroy(boids::Boid* self) {
		delete self;
	}
	// BoidObstacle
	boids::BoidObstacle* DECL boids_BoidObstacle_BoidObstacle_0() {
		return new boids::BoidObstacle();
	}
	void DECL boids_BoidObstacle__destroy(boids::BoidObstacle* self) {
		delete self;
	}
	// BoidTarget
	boids::BoidTarget* DECL boids_BoidTarget_BoidTarget_0() {
		return new boids::BoidTarget();
	}
	void DECL boids_BoidTarget__destroy(boids::BoidTarget* self) {
		delete self;
	}
	// Heading
	boids::Heading* DECL boids_Heading_Heading_0() {
		return new boids::Heading();
	}
	void DECL boids_Heading__destroy(boids::Heading* self) {
		delete self;
	}
	// MoveForward
	boids::MoveForward* DECL boids_MoveForward_MoveForward_0() {
		return new boids::MoveForward();
	}
	void DECL boids_MoveForward__destroy(boids::MoveForward* self) {
		delete self;
	}
	// MoveSpeed
	boids::MoveSpeed* DECL boids_MoveSpeed_MoveSpeed_0() {
		return new boids::MoveSpeed();
	}
	void DECL boids_MoveSpeed__destroy(boids::MoveSpeed* self) {
		delete self;
	}
	// Player
	void DECL boids_Player__destroy(boids::Player* self) {
		delete self;
	}
	// Position
	boids::Position* DECL boids_Position_Position_0() {
		return new boids::Position();
	}
	void DECL boids_Position__destroy(boids::Position* self) {
		delete self;
	}
	// Rotation
	boids::Rotation* DECL boids_Rotation_Rotation_0() {
		return new boids::Rotation();
	}
	void DECL boids_Rotation__destroy(boids::Rotation* self) {
		delete self;
	}
	// Transform4
	boids::Transform4* DECL boids_Transform4_Transform4_0() {
		return new boids::Transform4();
	}
	void DECL boids_Transform4__destroy(boids::Transform4* self) {
		delete self;
	}
	
}

