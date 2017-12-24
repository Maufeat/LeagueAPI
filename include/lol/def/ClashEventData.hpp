#pragma once
#include "../base_def.hpp" 
#include "ClashRewardSpec.hpp"
namespace lol {
  struct ClashEventData { 
    int32_t seasonId;
    std::string earnedDate;
    int64_t tournamentId;
    std::vector<std::string> playerUUIDs;
    std::string theme;
    ClashRewardSpec rewardSpec;
    std::string teamLogoName;
    std::string rewardType;
    std::string teamName;
    std::string teamLogoChromaId;
    std::string tournamentName;
    std::string tier;
    int32_t bracket; 
  };
  inline void to_json(json& j, const ClashEventData& v) {
    j["seasonId"] = v.seasonId; 
    j["earnedDate"] = v.earnedDate; 
    j["tournamentId"] = v.tournamentId; 
    j["playerUUIDs"] = v.playerUUIDs; 
    j["theme"] = v.theme; 
    j["rewardSpec"] = v.rewardSpec; 
    j["teamLogoName"] = v.teamLogoName; 
    j["rewardType"] = v.rewardType; 
    j["teamName"] = v.teamName; 
    j["teamLogoChromaId"] = v.teamLogoChromaId; 
    j["tournamentName"] = v.tournamentName; 
    j["tier"] = v.tier; 
    j["bracket"] = v.bracket; 
  }
  inline void from_json(const json& j, ClashEventData& v) {
    v.seasonId = j.at("seasonId").get<int32_t>(); 
    v.earnedDate = j.at("earnedDate").get<std::string>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
    v.teamLogoName = j.at("teamLogoName").get<std::string>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.teamName = j.at("teamName").get<std::string>(); 
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>(); 
    v.tournamentName = j.at("tournamentName").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.bracket = j.at("bracket").get<int32_t>(); 
  }
}