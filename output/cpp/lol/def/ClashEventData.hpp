#pragma once
#include "../base_def.hpp" 
#include "ClashRewardSpec.hpp"
namespace lol {
  struct ClashEventData { 
    std::string theme;
    std::string tier;
    std::string rewardType;
    ClashRewardSpec rewardSpec;
    std::vector<std::string> playerUUIDs;
    int32_t seasonId;
    int64_t tournamentId;
    std::string tournamentName;
    std::string teamLogoChromaId;
    std::string teamName;
    std::string teamLogoName;
    int32_t bracket;
    std::string earnedDate; 
  };
  inline void to_json(json& j, const ClashEventData& v) {
    j["theme"] = v.theme; 
    j["tier"] = v.tier; 
    j["rewardType"] = v.rewardType; 
    j["rewardSpec"] = v.rewardSpec; 
    j["playerUUIDs"] = v.playerUUIDs; 
    j["seasonId"] = v.seasonId; 
    j["tournamentId"] = v.tournamentId; 
    j["tournamentName"] = v.tournamentName; 
    j["teamLogoChromaId"] = v.teamLogoChromaId; 
    j["teamName"] = v.teamName; 
    j["teamLogoName"] = v.teamLogoName; 
    j["bracket"] = v.bracket; 
    j["earnedDate"] = v.earnedDate; 
  }
  inline void from_json(const json& j, ClashEventData& v) {
    v.theme = j.at("theme").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>(); 
    v.seasonId = j.at("seasonId").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.tournamentName = j.at("tournamentName").get<std::string>(); 
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>(); 
    v.teamName = j.at("teamName").get<std::string>(); 
    v.teamLogoName = j.at("teamLogoName").get<std::string>(); 
    v.bracket = j.at("bracket").get<int32_t>(); 
    v.earnedDate = j.at("earnedDate").get<std::string>(); 
  }
}