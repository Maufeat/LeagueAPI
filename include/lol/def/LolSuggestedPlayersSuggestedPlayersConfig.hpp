#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersConfig { 
    uint32_t MaxNumSuggestedPlayers;
    uint32_t PreviousPremadesLimit;
    uint32_t OnlineFriendsLimit;
    bool Enabled;
    uint32_t MaxNumReplacements;
    uint32_t FriendsOfFriendsLimit;
    bool FriendsOfFriendsEnabled;
    uint32_t VicoriousComradesLimit; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersConfig& v) {
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers; 
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit; 
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit; 
    j["Enabled"] = v.Enabled; 
    j["MaxNumReplacements"] = v.MaxNumReplacements; 
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit; 
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled; 
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersConfig& v) {
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>(); 
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>(); 
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>(); 
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>(); 
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>(); 
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>(); 
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>(); 
  }
}