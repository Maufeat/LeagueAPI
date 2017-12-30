#pragma once
#include "../base_def.hpp" 
#include "LootItemListClientDTO.hpp"
#include "PlayerLootDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
#include "QueryResultDTO.hpp"
namespace lol {
  struct PlayerLootDefinitionsDTO { 
    QueryResultDTO queryResult;
    std::vector<PlayerLootDTO> playerLoot;
    LootItemListClientDTO lootItemList;
    LootLcdsRecipeListClientDTO recipeList; 
  };
  inline void to_json(json& j, const PlayerLootDefinitionsDTO& v) {
    j["queryResult"] = v.queryResult; 
    j["playerLoot"] = v.playerLoot; 
    j["lootItemList"] = v.lootItemList; 
    j["recipeList"] = v.recipeList; 
  }
  inline void from_json(const json& j, PlayerLootDefinitionsDTO& v) {
    v.queryResult = j.at("queryResult").get<QueryResultDTO>(); 
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>(); 
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>(); 
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>(); 
  }
}