#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsPayloadDto { 
    std::string method;
    std::map<std::string, std::string> headers;
    std::string path;
    std::string body; 
  };
  inline void to_json(json& j, const LcdsPayloadDto& v) {
    j["method"] = v.method; 
    j["headers"] = v.headers; 
    j["path"] = v.path; 
    j["body"] = v.body; 
  }
  inline void from_json(const json& j, LcdsPayloadDto& v) {
    v.method = j.at("method").get<std::string>(); 
    v.headers = j.at("headers").get<std::map<std::string, std::string>>(); 
    v.path = j.at("path").get<std::string>(); 
    v.body = j.at("body").get<std::string>(); 
  }
}