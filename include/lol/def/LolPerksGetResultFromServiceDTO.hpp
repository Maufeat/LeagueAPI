#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksGetResultFromServiceDTO { 
    std::string error;
    std::string result; 
  };
  inline void to_json(json& j, const LolPerksGetResultFromServiceDTO& v) {
    j["error"] = v.error; 
    j["result"] = v.result; 
  }
  inline void from_json(const json& j, LolPerksGetResultFromServiceDTO& v) {
    v.error = j.at("error").get<std::string>(); 
    v.result = j.at("result").get<std::string>(); 
  }
}