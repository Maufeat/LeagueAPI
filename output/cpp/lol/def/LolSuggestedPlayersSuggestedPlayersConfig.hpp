#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersConfig { 
    bool FriendsOfFriendsEnabled;
    uint32_t VicoriousComradesLimit;
    uint32_t MaxNumReplacements;
    uint32_t PreviousPremadesLimit;
    bool Enabled;
    uint32_t OnlineFriendsLimit;
    uint32_t FriendsOfFriendsLimit;
    uint32_t MaxNumSuggestedPlayers; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersConfig& v) {
  j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled; 
  j["VicoriousComradesLimit"] = v.VicoriousComradesLimit; 
  j["MaxNumReplacements"] = v.MaxNumReplacements; 
  j["PreviousPremadesLimit"] = v.PreviousPremadesLimit; 
  j["Enabled"] = v.Enabled; 
  j["OnlineFriendsLimit"] = v.OnlineFriendsLimit; 
  j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit; 
  j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersConfig& v) {
  v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>(); 
  v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>(); 
  v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>(); 
  v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>(); 
  v.Enabled = j.at("Enabled").get<bool>(); 
  v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>(); 
  v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>(); 
  v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>(); 
  }
}