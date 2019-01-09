#include <napi.h>
#include "point_js.hpp"
#include "cylcutter_js.hpp"
#include "stlsurf_js.hpp"
#include "stlreader_js.hpp"
#include "triangle_js.hpp"
#include "bbox_js.hpp"
#include "waterline_js.hpp"

using namespace Napi;

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  PointJS::Init(env, exports);
  CylCutterJS::Init(env, exports);
  STLSurfJS::Init(env, exports);
  STLReaderJS::Init(env, exports);
  TriangleJS::Init(env, exports);
  BboxJS::Init(env, exports);
  WaterlineJS::Init(env, exports);
  return exports;
}

NODE_API_MODULE(opencamlib, InitAll)