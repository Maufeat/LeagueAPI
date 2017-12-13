#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEndOfGameChampionMasteryGrade.hpp>
#include <lol/def/LolEndOfGameChampionMasteryMini.hpp>
namespace lol {
  struct LolEndOfGameChampionMasteryUpdate { 
    int64_t pointsUntilNextLevelAfterGame;
    bool hasLeveledUp;
    std::vector<LolEndOfGameChampionMasteryGrade> memberGrades;
    int64_t pointsUntilNextLevelBeforeGame;
    int64_t bonusPointsGained;
    std::string id;
    int64_t pointsBeforeGame;
    int64_t pointsSinceLastLevelBeforeGame;
    int64_t level;
    int64_t pointsGainedIndividualContribution;
    uint64_t gameId;
    std::vector<LolEndOfGameChampionMasteryMini> levelUpList;
    int64_t score;
    std::string grade;
    int64_t pointsGained;
    int32_t championId;
    uint64_t playerId; 
  };
  void to_json(json& j, const LolEndOfGameChampionMasteryUpdate& v) {
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame; 
    j["hasLeveledUp"] = v.hasLeveledUp; 
    j["memberGrades"] = v.memberGrades; 
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame; 
    j["bonusPointsGained"] = v.bonusPointsGained; 
    j["id"] = v.id; 
    j["pointsBeforeGame"] = v.pointsBeforeGame; 
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame; 
    j["level"] = v.level; 
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution; 
    j["gameId"] = v.gameId; 
    j["levelUpList"] = v.levelUpList; 
    j["score"] = v.score; 
    j["grade"] = v.grade; 
    j["pointsGained"] = v.pointsGained; 
    j["championId"] = v.championId; 
    j["playerId"] = v.playerId; 
  }
  void from_json(const json& j, LolEndOfGameChampionMasteryUpdate& v) {
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>(); 
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>(); 
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade>>(); 
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>(); 
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>(); 
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>(); 
    v.level = j.at("level").get<int64_t>(); 
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini>>(); 
    v.score = j.at("score").get<int64_t>(); 
    v.grade = j.at("grade").get<std::string>(); 
    v.pointsGained = j.at("pointsGained").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}