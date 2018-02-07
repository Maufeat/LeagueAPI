#pragma once
#include "../base_def.hpp" 
#include "PlayerLootDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
#include "LootItemListClientDTO.hpp"
#include "QueryResultDTO.hpp"
namespace lol {
  struct PlayerLootDefinitionsDTO { 
    LootItemListClientDTO lootItemList;
    LootLcdsRecipeListClientDTO recipeList;
    QueryResultDTO queryResult;
    std::vector<PlayerLootDTO> playerLoot; 
  };
  inline void to_json(json& j, const PlayerLootDefinitionsDTO& v) {
    j["lootItemList"] = v.lootItemList; 
    j["recipeList"] = v.recipeList; 
    j["queryResult"] = v.queryResult; 
    j["playerLoot"] = v.playerLoot; 
  }
  inline void from_json(const json& j, PlayerLootDefinitionsDTO& v) {
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>(); 
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>(); 
    v.queryResult = j.at("queryResult").get<QueryResultDTO>(); 
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>(); 
  }
}