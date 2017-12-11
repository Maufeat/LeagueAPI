#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsOwnership.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionChroma.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionSkinEmblem.hpp>

namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin { /**/ 
    int32_t id;/**/
    std::string name;/**/
    bool isBase;/**/
    bool disabled;/**/
    std::string uncenteredSplashPath;/**/
    bool lastSelected;/**/
    int32_t championId;/**/
    bool stillObtainable;/**/
    std::optional<std::string> skinType;/**/
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;/**/
    std::optional<std::string> splashVideoPath;/**/
    std::string cardPath;/**/
    std::string splashPath;/**/
    std::optional<std::string> featuresText;/**/
    std::string rarityGemPath;/**/
    LolChampionsCollectionsOwnership ownership;/**/
    std::optional<std::string> chromaPath;/**/
    std::string tilePath;/**/
    std::vector<LolChampionsCollectionsChampionChroma> chromas;/**/
  };
  static void to_json(json& j, const LolChampionsCollectionsChampionSkin& v) { 
    j["id"] = v.id;
    j["name"] = v.name;
    j["isBase"] = v.isBase;
    j["disabled"] = v.disabled;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["lastSelected"] = v.lastSelected;
    j["championId"] = v.championId;
    j["stillObtainable"] = v.stillObtainable;
    j["skinType"] = v.skinType;
    j["emblems"] = v.emblems;
    j["splashVideoPath"] = v.splashVideoPath;
    j["cardPath"] = v.cardPath;
    j["splashPath"] = v.splashPath;
    j["featuresText"] = v.featuresText;
    j["rarityGemPath"] = v.rarityGemPath;
    j["ownership"] = v.ownership;
    j["chromaPath"] = v.chromaPath;
    j["tilePath"] = v.tilePath;
    j["chromas"] = v.chromas;
  }
  static void from_json(const json& j, LolChampionsCollectionsChampionSkin& v) { 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.skinType = j.at("skinType").get<std::optional<std::string>>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.splashVideoPath = j.at("splashVideoPath").get<std::optional<std::string>>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.featuresText = j.at("featuresText").get<std::optional<std::string>>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.chromaPath = j.at("chromaPath").get<std::optional<std::string>>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma>>(); 
  }
} 