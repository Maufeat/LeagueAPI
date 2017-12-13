#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LootLcdsRecipeListClientDTO.hpp>
#include <lol/def/QueryResultDTO.hpp>
#include <lol/def/LootItemListClientDTO.hpp>
#include <lol/def/PlayerLootDTO.hpp>
namespace lol {
  struct PlayerLootDefinitionsDTO { 
    QueryResultDTO queryResult;
    LootItemListClientDTO lootItemList;
    std::vector<PlayerLootDTO> playerLoot;
    LootLcdsRecipeListClientDTO recipeList; 
  };
  void to_json(json& j, const PlayerLootDefinitionsDTO& v) {
    j["queryResult"] = v.queryResult; 
    j["lootItemList"] = v.lootItemList; 
    j["playerLoot"] = v.playerLoot; 
    j["recipeList"] = v.recipeList; 
  }
  void from_json(const json& j, PlayerLootDefinitionsDTO& v) {
    v.queryResult = j.at("queryResult").get<QueryResultDTO>(); 
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>(); 
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>(); 
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>(); 
  }
}