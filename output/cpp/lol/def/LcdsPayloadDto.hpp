#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsPayloadDto { 
    std::string method;
    std::string body;
    std::map<std::string, std::string> headers;
    std::string path; 
  };
  void to_json(json& j, const LcdsPayloadDto& v) {
  j["method"] = v.method; 
  j["body"] = v.body; 
  j["headers"] = v.headers; 
  j["path"] = v.path; 
  }
  void from_json(const json& j, LcdsPayloadDto& v) {
  v.method = j.at("method").get<std::string>(); 
  v.body = j.at("body").get<std::string>(); 
  v.headers = j.at("headers").get<std::map<std::string, std::string>>(); 
  v.path = j.at("path").get<std::string>(); 
  }
}