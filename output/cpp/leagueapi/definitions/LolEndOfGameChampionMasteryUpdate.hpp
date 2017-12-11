#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolEndOfGameChampionMasteryMini.hpp>
#include <leagueapi/definitions/LolEndOfGameChampionMasteryGrade.hpp>

namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate { /**/ 
    int64_t pointsBeforeGame;/**/
    uint64_t playerId;/**/
    int64_t bonusPointsGained;/**/
    std::string id;/**/
    int32_t championId;/**/
    std::vector<LolEndOfGameChampionMasteryGrade> memberGrades;/**/
    int64_t level;/**/
    std::string grade;/**/
    bool hasLeveledUp;/**/
    int64_t pointsUntilNextLevelBeforeGame;/**/
    int64_t pointsSinceLastLevelBeforeGame;/**/
    std::vector<LolEndOfGameChampionMasteryMini> levelUpList;/**/
    uint64_t gameId;/**/
    int64_t pointsGained;/**/
    int64_t score;/**/
    int64_t pointsGainedIndividualContribution;/**/
    int64_t pointsUntilNextLevelAfterGame;/**/
  };
  static void to_json(json& j, const LolEndOfGameChampionMasteryUpdate& v) { 
    j["pointsBeforeGame"] = v.pointsBeforeGame;
    j["playerId"] = v.playerId;
    j["bonusPointsGained"] = v.bonusPointsGained;
    j["id"] = v.id;
    j["championId"] = v.championId;
    j["memberGrades"] = v.memberGrades;
    j["level"] = v.level;
    j["grade"] = v.grade;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
    j["levelUpList"] = v.levelUpList;
    j["gameId"] = v.gameId;
    j["pointsGained"] = v.pointsGained;
    j["score"] = v.score;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
  }
  static void from_json(const json& j, LolEndOfGameChampionMasteryUpdate& v) { 
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade>>(); 
    v.level = j.at("level").get<int64_t>(); 
    v.grade = j.at("grade").get<std::string>(); 
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>(); 
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>(); 
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>(); 
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.pointsGained = j.at("pointsGained").get<int64_t>(); 
    v.score = j.at("score").get<int64_t>(); 
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>(); 
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>(); 
  }
} 