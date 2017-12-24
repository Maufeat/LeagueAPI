#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsPayloadDto { 
    std::map<std::string, std::string> headers;
    std::string method;
    std::string body;
    std::string path; 
  };
  inline void to_json(json& j, const LcdsPayloadDto& v) {
    j["headers"] = v.headers; 
    j["method"] = v.method; 
    j["body"] = v.body; 
    j["path"] = v.path; 
  }
  inline void from_json(const json& j, LcdsPayloadDto& v) {
    v.headers = j.at("headers").get<std::map<std::string, std::string>>(); 
    v.method = j.at("method").get<std::string>(); 
    v.body = j.at("body").get<std::string>(); 
    v.path = j.at("path").get<std::string>(); 
  }
}