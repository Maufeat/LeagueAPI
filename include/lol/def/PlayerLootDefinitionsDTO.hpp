#pragma once
#include "../base_def.hpp" 
#include "LootLcdsRecipeListClientDTO.hpp"
#include "PlayerLootDTO.hpp"
#include "LootItemListClientDTO.hpp"
#include "QueryResultDTO.hpp"
namespace lol {
  struct PlayerLootDefinitionsDTO { 
    LootItemListClientDTO lootItemList;
    LootLcdsRecipeListClientDTO recipeList;
    std::vector<PlayerLootDTO> playerLoot;
    QueryResultDTO queryResult; 
  };
  inline void to_json(json& j, const PlayerLootDefinitionsDTO& v) {
    j["lootItemList"] = v.lootItemList; 
    j["recipeList"] = v.recipeList; 
    j["playerLoot"] = v.playerLoot; 
    j["queryResult"] = v.queryResult; 
  }
  inline void from_json(const json& j, PlayerLootDefinitionsDTO& v) {
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>(); 
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>(); 
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>(); 
    v.queryResult = j.at("queryResult").get<QueryResultDTO>(); 
  }
}