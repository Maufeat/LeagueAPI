#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersConfig { 
    bool Enabled;
    bool FriendsOfFriendsEnabled;
    uint32_t MaxNumSuggestedPlayers;
    uint32_t MaxNumReplacements;
    uint32_t PreviousPremadesLimit;
    uint32_t OnlineFriendsLimit;
    uint32_t FriendsOfFriendsLimit;
    uint32_t VicoriousComradesLimit; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersConfig& v) {
    j["Enabled"] = v.Enabled; 
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled; 
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers; 
    j["MaxNumReplacements"] = v.MaxNumReplacements; 
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit; 
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit; 
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit; 
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>(); 
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>(); 
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>(); 
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>(); 
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>(); 
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>(); 
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>(); 
  }
}