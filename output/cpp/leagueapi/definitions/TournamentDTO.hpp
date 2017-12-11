#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/TournamentPhaseDTO.hpp>
#include <leagueapi/definitions/ClashRewardConfigClient.hpp>

namespace leagueapi {
  struct TournamentDTO { /**/ 
    int64_t scheduleTime;/**/
    int64_t rosterCreateDeadline;/**/
    int32_t themeId;/**/
    std::vector<int32_t> buyInOptions;/**/
    int64_t id;/**/
    int32_t rosterSize;/**/
    int64_t scheduleEndTime;/**/
    std::string nameLocKey;/**/
    int32_t queueId;/**/
    int32_t entryFee;/**/
    std::vector<ClashRewardConfigClient> rewardConfig;/**/
    std::vector<TournamentPhaseDTO> phases;/**/
    int64_t scoutingTimeMs;/**/
    int32_t maxSub;/**/
    int64_t rosterDisbandDeadline;/**/
  };
  static void to_json(json& j, const TournamentDTO& v) { 
    j["scheduleTime"] = v.scheduleTime;
    j["rosterCreateDeadline"] = v.rosterCreateDeadline;
    j["themeId"] = v.themeId;
    j["buyInOptions"] = v.buyInOptions;
    j["id"] = v.id;
    j["rosterSize"] = v.rosterSize;
    j["scheduleEndTime"] = v.scheduleEndTime;
    j["nameLocKey"] = v.nameLocKey;
    j["queueId"] = v.queueId;
    j["entryFee"] = v.entryFee;
    j["rewardConfig"] = v.rewardConfig;
    j["phases"] = v.phases;
    j["scoutingTimeMs"] = v.scoutingTimeMs;
    j["maxSub"] = v.maxSub;
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline;
  }
  static void from_json(const json& j, TournamentDTO& v) { 
    v.scheduleTime = j.at("scheduleTime").get<int64_t>(); 
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO>>(); 
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>(); 
    v.maxSub = j.at("maxSub").get<int32_t>(); 
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>(); 
  }
} 