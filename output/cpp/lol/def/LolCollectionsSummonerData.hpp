#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsSpellBookDTO.hpp>
#include <lol/def/CollectionsLcdsMasteryBookDTO.hpp>
namespace lol {
  struct LolCollectionsSummonerData { 
    CollectionsLcdsSpellBookDTO spellBook;
    CollectionsLcdsMasteryBookDTO masteryBook; 
  };
  void to_json(json& j, const LolCollectionsSummonerData& v) {
    j["spellBook"] = v.spellBook; 
    j["masteryBook"] = v.masteryBook; 
  }
  void from_json(const json& j, LolCollectionsSummonerData& v) {
    v.spellBook = j.at("spellBook").get<CollectionsLcdsSpellBookDTO>(); 
    v.masteryBook = j.at("masteryBook").get<CollectionsLcdsMasteryBookDTO>(); 
  }
}