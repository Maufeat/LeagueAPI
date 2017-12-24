#pragma once
#include "../base_def.hpp" 
#include "MissionAlertDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
#include "MissionRequirementDTO.hpp"
namespace lol {
  struct PlayerMissionDTO { 
    int64_t cooldownTimeMillis;
    std::string missionType;
    std::string celebrationType;
    std::string helperText;
    std::string locale;
    std::string description;
    std::vector<MissionRequirementDTO> requirements;
    int64_t endTime;
    std::string backgroundImageUrl;
    std::string title;
    int64_t startTime;
    int64_t completedDate;
    std::string iconImageUrl;
    std::string status;
    std::vector<PlayerMissionObjectiveDTO> objectives;
    std::string internalName;
    std::vector<MissionAlertDTO> expiringWarnings;
    bool viewed;
    int64_t lastUpdatedTimestamp;
    std::string seriesName;
    std::string displayType;
    std::string id;
    bool isNew;
    std::string completionExpression;
    std::vector<PlayerMissionRewardDTO> rewards; 
  };
  inline void to_json(json& j, const PlayerMissionDTO& v) {
    j["cooldownTimeMillis"] = v.cooldownTimeMillis; 
    j["missionType"] = v.missionType; 
    j["celebrationType"] = v.celebrationType; 
    j["helperText"] = v.helperText; 
    j["locale"] = v.locale; 
    j["description"] = v.description; 
    j["requirements"] = v.requirements; 
    j["endTime"] = v.endTime; 
    j["backgroundImageUrl"] = v.backgroundImageUrl; 
    j["title"] = v.title; 
    j["startTime"] = v.startTime; 
    j["completedDate"] = v.completedDate; 
    j["iconImageUrl"] = v.iconImageUrl; 
    j["status"] = v.status; 
    j["objectives"] = v.objectives; 
    j["internalName"] = v.internalName; 
    j["expiringWarnings"] = v.expiringWarnings; 
    j["viewed"] = v.viewed; 
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp; 
    j["seriesName"] = v.seriesName; 
    j["displayType"] = v.displayType; 
    j["id"] = v.id; 
    j["isNew"] = v.isNew; 
    j["completionExpression"] = v.completionExpression; 
    j["rewards"] = v.rewards; 
  }
  inline void from_json(const json& j, PlayerMissionDTO& v) {
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>(); 
    v.missionType = j.at("missionType").get<std::string>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.helperText = j.at("helperText").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO>>(); 
    v.endTime = j.at("endTime").get<int64_t>(); 
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.startTime = j.at("startTime").get<int64_t>(); 
    v.completedDate = j.at("completedDate").get<int64_t>(); 
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO>>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO>>(); 
    v.viewed = j.at("viewed").get<bool>(); 
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>(); 
    v.seriesName = j.at("seriesName").get<std::string>(); 
    v.displayType = j.at("displayType").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.isNew = j.at("isNew").get<bool>(); 
    v.completionExpression = j.at("completionExpression").get<std::string>(); 
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO>>(); 
  }
}