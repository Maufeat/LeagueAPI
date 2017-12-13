#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyChampCounts { 
    uint32_t championsFreeToPlayReward;
    uint32_t championsFreeToPlay;
    uint32_t championsOwned;
    uint32_t championsRented; 
  };
  void to_json(json& j, const LolLobbyChampCounts& v) {
  j["championsFreeToPlayReward"] = v.championsFreeToPlayReward; 
  j["championsFreeToPlay"] = v.championsFreeToPlay; 
  j["championsOwned"] = v.championsOwned; 
  j["championsRented"] = v.championsRented; 
  }
  void from_json(const json& j, LolLobbyChampCounts& v) {
  v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>(); 
  v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>(); 
  v.championsOwned = j.at("championsOwned").get<uint32_t>(); 
  v.championsRented = j.at("championsRented").get<uint32_t>(); 
  }
}