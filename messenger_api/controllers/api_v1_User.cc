#include "api_v1_User.h"

using namespace api::v1;

// Add definition of your processing function here



void User::login(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback) {
    LOG_DEBUG << "GET /users";
    Json::Value ret;
    ret["id"] = "1";
    ret["token"] = "<TOKEN>";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
