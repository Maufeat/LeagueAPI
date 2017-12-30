#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameChampionMasteryGrade.hpp"
#include "LolEndOfGameChampionMasteryMini.hpp"
namespace lol {
  struct LolEndOfGameChampionMasteryUpdate { 
    int64_t pointsUntilNextLevelBeforeGame;
    std::string id;
    uint64_t playerId;
    int64_t pointsGainedIndividualContribution;
    int64_t pointsGained;
    std::vector<LolEndOfGameChampionMasteryMini> levelUpList;
    uint64_t gameId;
    std::vector<LolEndOfGameChampionMasteryGrade> memberGrades;
    int64_t level;
    int64_t pointsBeforeGame;
    int64_t score;
    int64_t pointsSinceLastLevelBeforeGame;
    int64_t bonusPointsGained;
    bool hasLeveledUp;
    std::string grade;
    int32_t championId;
    int64_t pointsUntilNextLevelAfterGame; 
  };
  inline void to_json(json& j, const LolEndOfGameChampionMasteryUpdate& v) {
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame; 
    j["id"] = v.id; 
    j["playerId"] = v.playerId; 
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution; 
    j["pointsGained"] = v.pointsGained; 
    j["levelUpList"] = v.levelUpList; 
    j["gameId"] = v.gameId; 
    j["memberGrades"] = v.memberGrades; 
    j["level"] = v.level; 
    j["pointsBeforeGame"] = v.pointsBeforeGame; 
    j["score"] = v.score; 
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame; 
    j["bonusPointsGained"] = v.bonusPointsGained; 
    j["hasLeveledUp"] = v.hasLeveledUp; 
    j["grade"] = v.grade; 
    j["championId"] = v.championId; 
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame; 
  }
  inline void from_json(const json& j, LolEndOfGameChampionMasteryUpdate& v) {
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>(); 
    v.pointsGained = j.at("pointsGained").get<int64_t>(); 
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade>>(); 
    v.level = j.at("level").get<int64_t>(); 
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>(); 
    v.score = j.at("score").get<int64_t>(); 
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>(); 
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>(); 
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>(); 
    v.grade = j.at("grade").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>(); 
  }
}