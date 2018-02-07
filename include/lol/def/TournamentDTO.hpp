#pragma once
#include "../base_def.hpp" 
#include "ClashRewardConfigClient.hpp"
#include "TournamentPhaseDTO.hpp"
namespace lol {
  struct TournamentDTO { 
    int64_t id;
    int64_t scheduleTime;
    int64_t scheduleEndTime;
    int64_t rosterDisbandDeadline;
    int64_t rosterCreateDeadline;
    int32_t entryFee;
    int32_t rosterSize;
    int32_t themeId;
    std::string nameLocKey;
    std::vector<int32_t> buyInOptions;
    int32_t queueId;
    int64_t scoutingTimeMs;
    int32_t maxSub;
    std::vector<TournamentPhaseDTO> phases;
    std::vector<ClashRewardConfigClient> rewardConfig; 
  };
  inline void to_json(json& j, const TournamentDTO& v) {
    j["id"] = v.id; 
    j["scheduleTime"] = v.scheduleTime; 
    j["scheduleEndTime"] = v.scheduleEndTime; 
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline; 
    j["rosterCreateDeadline"] = v.rosterCreateDeadline; 
    j["entryFee"] = v.entryFee; 
    j["rosterSize"] = v.rosterSize; 
    j["themeId"] = v.themeId; 
    j["nameLocKey"] = v.nameLocKey; 
    j["buyInOptions"] = v.buyInOptions; 
    j["queueId"] = v.queueId; 
    j["scoutingTimeMs"] = v.scoutingTimeMs; 
    j["maxSub"] = v.maxSub; 
    j["phases"] = v.phases; 
    j["rewardConfig"] = v.rewardConfig; 
  }
  inline void from_json(const json& j, TournamentDTO& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.scheduleTime = j.at("scheduleTime").get<int64_t>(); 
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>(); 
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>(); 
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>(); 
    v.entryFee = j.at("entryFee").get<int32_t>(); 
    v.rosterSize = j.at("rosterSize").get<int32_t>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>(); 
    v.maxSub = j.at("maxSub").get<int32_t>(); 
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO>>(); 
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
  }
}