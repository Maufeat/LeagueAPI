#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoginAccountStateType.hpp>
namespace lol {
  struct LolLoginAccountStateResource { 
    LolLoginAccountStateType state; 
  };
  void to_json(json& j, const LolLoginAccountStateResource& v) {
    j["state"] = v.state; 
  }
  void from_json(const json& j, LolLoginAccountStateResource& v) {
    v.state = j.at("state").get<LolLoginAccountStateType>(); 
  }
}