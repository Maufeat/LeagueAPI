#pragma once
#include "../base_def.hpp" 
#include "MissionRequirementDTO.hpp"
#include "MissionAlertDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
namespace lol {
  struct PlayerMissionDTO { 
    std::vector<MissionAlertDTO> expiringWarnings;
    std::string id;
    std::string celebrationType;
    std::string helperText;
    std::string description;
    std::vector<PlayerMissionObjectiveDTO> objectives;
    int64_t endTime;
    std::string internalName;
    std::vector<PlayerMissionRewardDTO> rewards;
    std::string missionType;
    int64_t cooldownTimeMillis;
    int64_t startTime;
    std::string status;
    std::string iconImageUrl;
    int64_t completedDate;
    std::string locale;
    bool viewed;
    std::string title;
    std::string completionExpression;
    std::string backgroundImageUrl;
    int64_t lastUpdatedTimestamp;
    std::vector<MissionRequirementDTO> requirements;
    std::string seriesName;
    std::string displayType;
    bool isNew; 
  };
  inline void to_json(json& j, const PlayerMissionDTO& v) {
    j["expiringWarnings"] = v.expiringWarnings; 
    j["id"] = v.id; 
    j["celebrationType"] = v.celebrationType; 
    j["helperText"] = v.helperText; 
    j["description"] = v.description; 
    j["objectives"] = v.objectives; 
    j["endTime"] = v.endTime; 
    j["internalName"] = v.internalName; 
    j["rewards"] = v.rewards; 
    j["missionType"] = v.missionType; 
    j["cooldownTimeMillis"] = v.cooldownTimeMillis; 
    j["startTime"] = v.startTime; 
    j["status"] = v.status; 
    j["iconImageUrl"] = v.iconImageUrl; 
    j["completedDate"] = v.completedDate; 
    j["locale"] = v.locale; 
    j["viewed"] = v.viewed; 
    j["title"] = v.title; 
    j["completionExpression"] = v.completionExpression; 
    j["backgroundImageUrl"] = v.backgroundImageUrl; 
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp; 
    j["requirements"] = v.requirements; 
    j["seriesName"] = v.seriesName; 
    j["displayType"] = v.displayType; 
    j["isNew"] = v.isNew; 
  }
  inline void from_json(const json& j, PlayerMissionDTO& v) {
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.helperText = j.at("helperText").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO>>(); 
    v.endTime = j.at("endTime").get<int64_t>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO>>(); 
    v.missionType = j.at("missionType").get<std::string>(); 
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>(); 
    v.startTime = j.at("startTime").get<int64_t>(); 
    v.status = j.at("status").get<std::string>(); 
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>(); 
    v.completedDate = j.at("completedDate").get<int64_t>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.viewed = j.at("viewed").get<bool>(); 
    v.title = j.at("title").get<std::string>(); 
    v.completionExpression = j.at("completionExpression").get<std::string>(); 
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>(); 
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>(); 
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO>>(); 
    v.seriesName = j.at("seriesName").get<std::string>(); 
    v.displayType = j.at("displayType").get<std::string>(); 
    v.isNew = j.at("isNew").get<bool>(); 
  }
}