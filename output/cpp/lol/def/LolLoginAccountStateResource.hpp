#pragma once
#include "../base_def.hpp" 
#include "LolLoginAccountStateType.hpp"
namespace lol {
  struct LolLoginAccountStateResource { 
    LolLoginAccountStateType state; 
  };
  inline void to_json(json& j, const LolLoginAccountStateResource& v) {
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLoginAccountStateResource& v) {
    v.state = j.at("state").get<LolLoginAccountStateType>(); 
  }
}