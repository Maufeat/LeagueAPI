#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksGetResultFromServiceDTO { 
    std::string result;
    std::string error; 
  };
  inline void to_json(json& j, const LolPerksGetResultFromServiceDTO& v) {
    j["result"] = v.result; 
    j["error"] = v.error; 
  }
  inline void from_json(const json& j, LolPerksGetResultFromServiceDTO& v) {
    v.result = j.at("result").get<std::string>(); 
    v.error = j.at("error").get<std::string>(); 
  }
}