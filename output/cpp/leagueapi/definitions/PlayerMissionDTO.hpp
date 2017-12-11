#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MissionAlertDTO.hpp>
#include <leagueapi/definitions/PlayerMissionRewardDTO.hpp>
#include <leagueapi/definitions/PlayerMissionObjectiveDTO.hpp>
#include <leagueapi/definitions/MissionRequirementDTO.hpp>

namespace leagueapi {
  struct PlayerMissionDTO { /**/ 
    std::vector<MissionRequirementDTO> requirements;/**/
    std::string id;/**/
    std::string missionType;/**/
    std::vector<PlayerMissionRewardDTO> rewards;/**/
    int64_t startTime;/**/
    std::string internalName;/**/
    std::string seriesName;/**/
    bool isNew;/**/
    std::string completionExpression;/**/
    std::string title;/**/
    std::string status;/**/
    bool viewed;/**/
    int64_t cooldownTimeMillis;/**/
    std::string celebrationType;/**/
    std::string description;/**/
    int64_t endTime;/**/
    std::string helperText;/**/
    std::string backgroundImageUrl;/**/
    std::string locale;/**/
    std::vector<MissionAlertDTO> expiringWarnings;/**/
    std::vector<PlayerMissionObjectiveDTO> objectives;/**/
    int64_t lastUpdatedTimestamp;/**/
    std::string iconImageUrl;/**/
    std::string displayType;/**/
    int64_t completedDate;/**/
  };
  static void to_json(json& j, const PlayerMissionDTO& v) { 
    j["requirements"] = v.requirements;
    j["id"] = v.id;
    j["missionType"] = v.missionType;
    j["rewards"] = v.rewards;
    j["startTime"] = v.startTime;
    j["internalName"] = v.internalName;
    j["seriesName"] = v.seriesName;
    j["isNew"] = v.isNew;
    j["completionExpression"] = v.completionExpression;
    j["title"] = v.title;
    j["status"] = v.status;
    j["viewed"] = v.viewed;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["celebrationType"] = v.celebrationType;
    j["description"] = v.description;
    j["endTime"] = v.endTime;
    j["helperText"] = v.helperText;
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["locale"] = v.locale;
    j["expiringWarnings"] = v.expiringWarnings;
    j["objectives"] = v.objectives;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["iconImageUrl"] = v.iconImageUrl;
    j["displayType"] = v.displayType;
    j["completedDate"] = v.completedDate;
  }
  static void from_json(const json& j, PlayerMissionDTO& v) { 
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.missionType = j.at("missionType").get<std::string>(); 
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO>>(); 
    v.startTime = j.at("startTime").get<int64_t>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.seriesName = j.at("seriesName").get<std::string>(); 
    v.isNew = j.at("isNew").get<bool>(); 
    v.completionExpression = j.at("completionExpression").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.viewed = j.at("viewed").get<bool>(); 
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.endTime = j.at("endTime").get<int64_t>(); 
    v.helperText = j.at("helperText").get<std::string>(); 
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO>>(); 
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO>>(); 
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>(); 
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>(); 
    v.displayType = j.at("displayType").get<std::string>(); 
    v.completedDate = j.at("completedDate").get<int64_t>(); 
  }
} 