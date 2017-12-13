#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsPayloadDto { 
    std::string body;
    std::string path;
    std::string method;
    std::map<std::string, std::string> headers; 
  };
  void to_json(json& j, const LcdsPayloadDto& v) {
  j["body"] = v.body; 
  j["path"] = v.path; 
  j["method"] = v.method; 
  j["headers"] = v.headers; 
  }
  void from_json(const json& j, LcdsPayloadDto& v) {
  v.body = j.at("body").get<std::string>(); 
  v.path = j.at("path").get<std::string>(); 
  v.method = j.at("method").get<std::string>(); 
  v.headers = j.at("headers").get<std::map<std::string, std::string>>(); 
  }
}