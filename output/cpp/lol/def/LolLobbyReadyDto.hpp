#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyReadyDto { 
    bool ready; 
  };
  void to_json(json& j, const LolLobbyReadyDto& v) {
    j["ready"] = v.ready; 
  }
  void from_json(const json& j, LolLobbyReadyDto& v) {
    v.ready = j.at("ready").get<bool>(); 
  }
}