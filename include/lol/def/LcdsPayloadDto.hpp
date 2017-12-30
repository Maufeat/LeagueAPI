#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsPayloadDto { 
    std::string body;
    std::string method;
    std::string path;
    std::map<std::string, std::string> headers; 
  };
  inline void to_json(json& j, const LcdsPayloadDto& v) {
    j["body"] = v.body; 
    j["method"] = v.method; 
    j["path"] = v.path; 
    j["headers"] = v.headers; 
  }
  inline void from_json(const json& j, LcdsPayloadDto& v) {
    v.body = j.at("body").get<std::string>(); 
    v.method = j.at("method").get<std::string>(); 
    v.path = j.at("path").get<std::string>(); 
    v.headers = j.at("headers").get<std::map<std::string, std::string>>(); 
  }
}