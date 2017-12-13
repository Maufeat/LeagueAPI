#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardConfigClient.hpp>
#include <lol/def/TournamentPhaseDTO.hpp>
namespace lol {
  struct TournamentDTO { 
    std::vector<int32_t> buyInOptions;
    int64_t scheduleEndTime;
    std::vector<ClashRewardConfigClient> rewardConfig;
    int32_t queueId;
    std::vector<TournamentPhaseDTO> phases;
    int64_t rosterDisbandDeadline;
    std::string nameLocKey;
    int32_t themeId;
    int32_t maxSub;
    int32_t entryFee;
    int64_t id;
    int64_t scheduleTime;
    int32_t rosterSize;
    int64_t scoutingTimeMs;
    int64_t rosterCreateDeadline; 
  };
  void to_json(json& j, const TournamentDTO& v) {
  j["buyInOptions"] = v.buyInOptions; 
  j["scheduleEndTime"] = v.scheduleEndTime; 
  j["rewardConfig"] = v.rewardConfig; 
  j["queueId"] = v.queueId; 
  j["phases"] = v.phases; 
  j["rosterDisbandDeadline"] = v.rosterDisbandDeadline; 
  j["nameLocKey"] = v.nameLocKey; 
  j["themeId"] = v.themeId; 
  j["maxSub"] = v.maxSub; 
  j["entryFee"] = v.entryFee; 
  j["id"] = v.id; 
  j["scheduleTime"] = v.scheduleTime; 
  j["rosterSize"] = v.rosterSize; 
  j["scoutingTimeMs"] = v.scoutingTimeMs; 
  j["rosterCreateDeadline"] = v.rosterCreateDeadline; 
  }
  void from_json(const json& j, TournamentDTO& v) {
  v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>(); 
  v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>(); 
  v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO>>(); 
  v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>(); 
  v.nameLocKey = j.at("nameLocKey").get<std::string>(); 
  v.themeId = j.at("themeId").get<int32_t>(); 
  v.maxSub = j.at("maxSub").get<int32_t>(); 
  v.entryFee = j.at("entryFee").get<int32_t>(); 
  v.id = j.at("id").get<int64_t>(); 
  v.scheduleTime = j.at("scheduleTime").get<int64_t>(); 
  v.rosterSize = j.at("rosterSize").get<int32_t>(); 
  v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>(); 
  v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>(); 
  }
}