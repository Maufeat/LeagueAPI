#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyAutoFillQueueDto.hpp>
namespace lol {
  struct LolLobbyAutoFillDto { 
    std::vector<LolLobbyAutoFillQueueDto> autoFillQueues; 
  };
  inline void to_json(json& j, const LolLobbyAutoFillDto& v) {
    j["autoFillQueues"] = v.autoFillQueues; 
  }
  inline void from_json(const json& j, LolLobbyAutoFillDto& v) {
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolLobbyAutoFillQueueDto>>(); 
  }
}