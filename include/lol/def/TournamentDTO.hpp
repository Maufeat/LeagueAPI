#pragma once
#include "../base_def.hpp" 
#include "TournamentPhaseDTO.hpp"
#include "ClashRewardConfigClient.hpp"
namespace lol {
  struct TournamentDTO { 
    std::vector<ClashRewardConfigClient> rewardConfig;
    int32_t themeId;
    int64_t rosterDisbandDeadline;
    std::vector<int32_t> buyInOptions;
    int64_t scheduleTime;
    int32_t rosterSize;
    std::vector<TournamentPhaseDTO> phases;
    int64_t rosterCreateDeadline;
    int32_t maxSub;
    std::string nameLocKey;
    int64_t id;
    int32_t entryFee;
    int64_t scheduleEndTime;
    int64_t scoutingTimeMs;
    int32_t queueId; 
  };
  inline void to_json(json& j, const TournamentDTO& v) {
    j["rewardConfig"] = v.rewardConfig; 
    j["themeId"] = v.themeId; 
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline; 
    j["buyInOptions"] = v.buyInOptions; 
    j["scheduleTime"] = v.scheduleTime; 
    j["rosterSize"] = v.rosterSize; 
    j["phases"] = v.phases; 
    j["rosterCreateDeadline"] = v.rosterCreateDeadline; 
    j["maxSub"] = v.maxSub; 
    j["nameLocKey"] = v.nameLocKey; 
    j["id"] = v.id; 
    j["entryFee"] = v.entryFee; 
    j["scheduleEndTime"] = v.scheduleEndTime; 
    j["scoutingTimeMs"] = v.scoutingTimeMs; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, TournamentDTO& v) {
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.scheduleTime = j.at("scheduleTime").get<int64_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO>>(); 
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>(); 
    v.maxSub = j.at("maxSub").get<int32_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>(); 
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}