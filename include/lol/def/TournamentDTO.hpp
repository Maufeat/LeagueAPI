#pragma once
#include "../base_def.hpp" 
#include "ClashRewardConfigClient.hpp"
#include "TournamentPhaseDTO.hpp"
namespace lol {
  struct TournamentDTO { 
    int64_t rosterDisbandDeadline;
    std::vector<TournamentPhaseDTO> phases;
    std::string nameLocKey;
    int32_t maxSub;
    int64_t scoutingTimeMs;
    int32_t themeId;
    int32_t rosterSize;
    std::vector<ClashRewardConfigClient> rewardConfig;
    std::vector<int32_t> buyInOptions;
    int64_t id;
    int32_t queueId;
    int32_t entryFee;
    int64_t scheduleTime;
    int64_t scheduleEndTime;
    int64_t rosterCreateDeadline; 
  };
  inline void to_json(json& j, const TournamentDTO& v) {
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline; 
    j["phases"] = v.phases; 
    j["nameLocKey"] = v.nameLocKey; 
    j["maxSub"] = v.maxSub; 
    j["scoutingTimeMs"] = v.scoutingTimeMs; 
    j["themeId"] = v.themeId; 
    j["rosterSize"] = v.rosterSize; 
    j["rewardConfig"] = v.rewardConfig; 
    j["buyInOptions"] = v.buyInOptions; 
    j["id"] = v.id; 
    j["queueId"] = v.queueId; 
    j["entryFee"] = v.entryFee; 
    j["scheduleTime"] = v.scheduleTime; 
    j["scheduleEndTime"] = v.scheduleEndTime; 
    j["rosterCreateDeadline"] = v.rosterCreateDeadline; 
  }
  inline void from_json(const json& j, TournamentDTO& v) {
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>(); 
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO>>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.maxSub = j.at("maxSub").get<int32_t>(); 
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.scheduleTime = j.at("scheduleTime").get<int64_t>(); 
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>(); 
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>(); 
  }
}