#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyChampCounts { 
    uint32_t championsOwned;
    uint32_t championsFreeToPlay;
    uint32_t championsFreeToPlayReward;
    uint32_t championsRented; 
  };
  inline void to_json(json& j, const LolLobbyChampCounts& v) {
    j["championsOwned"] = v.championsOwned; 
    j["championsFreeToPlay"] = v.championsFreeToPlay; 
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward; 
    j["championsRented"] = v.championsRented; 
  }
  inline void from_json(const json& j, LolLobbyChampCounts& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t>(); 
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>(); 
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>(); 
    v.championsRented = j.at("championsRented").get<uint32_t>(); 
  }
}