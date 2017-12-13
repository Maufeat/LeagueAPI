#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoginLcdsResponse { 
    std::string typeName;
    json body; 
  };
  void to_json(json& j, const LolLoginLcdsResponse& v) {
  j["typeName"] = v.typeName; 
  j["body"] = v.body; 
  }
  void from_json(const json& j, LolLoginLcdsResponse& v) {
  v.typeName = j.at("typeName").get<std::string>(); 
  v.body = j.at("body").get<json>(); 
  }
}