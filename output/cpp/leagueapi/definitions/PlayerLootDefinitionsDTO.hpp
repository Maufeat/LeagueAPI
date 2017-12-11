#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PlayerLootDTO.hpp>
#include <leagueapi/definitions/LootItemListClientDTO.hpp>
#include <leagueapi/definitions/QueryResultDTO.hpp>
#include <leagueapi/definitions/LootLcdsRecipeListClientDTO.hpp>

namespace leagueapi {
  struct PlayerLootDefinitionsDTO { /**/ 
    QueryResultDTO queryResult;/**/
    LootLcdsRecipeListClientDTO recipeList;/**/
    LootItemListClientDTO lootItemList;/**/
    std::vector<PlayerLootDTO> playerLoot;/**/
  };
  static void to_json(json& j, const PlayerLootDefinitionsDTO& v) { 
    j["queryResult"] = v.queryResult;
    j["recipeList"] = v.recipeList;
    j["lootItemList"] = v.lootItemList;
    j["playerLoot"] = v.playerLoot;
  }
  static void from_json(const json& j, PlayerLootDefinitionsDTO& v) { 
    v.queryResult = j.at("queryResult").get<QueryResultDTO>(); 
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>(); 
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>(); 
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>(); 
  }
} 