#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLcdsResponse { 
    json body;
    std::string typeName; 
  };
  inline void to_json(json& j, const LolLoginLcdsResponse& v) {
    j["body"] = v.body; 
    j["typeName"] = v.typeName; 
  }
  inline void from_json(const json& j, LolLoginLcdsResponse& v) {
    v.body = j.at("body").get<json>(); 
    v.typeName = j.at("typeName").get<std::string>(); 
  }
}