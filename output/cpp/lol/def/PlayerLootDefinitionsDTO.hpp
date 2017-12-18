#pragma once
#include "../base_def.hpp" 
#include "PlayerLootDTO.hpp"
#include "QueryResultDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
#include "LootItemListClientDTO.hpp"
namespace lol {
  struct PlayerLootDefinitionsDTO { 
    QueryResultDTO queryResult;
    LootItemListClientDTO lootItemList;
    std::vector<PlayerLootDTO> playerLoot;
    LootLcdsRecipeListClientDTO recipeList; 
  };
  inline void to_json(json& j, const PlayerLootDefinitionsDTO& v) {
    j["queryResult"] = v.queryResult; 
    j["lootItemList"] = v.lootItemList; 
    j["playerLoot"] = v.playerLoot; 
    j["recipeList"] = v.recipeList; 
  }
  inline void from_json(const json& j, PlayerLootDefinitionsDTO& v) {
    v.queryResult = j.at("queryResult").get<QueryResultDTO>(); 
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>(); 
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>(); 
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>(); 
  }
}