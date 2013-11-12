#pragma once
#ifndef ENGINE
#define ENGINE

#include <Debug.h>
#include <Shader.h>
#include <Viewport.h>
#include <FileReader.h>
#include <Sprite.h>
#include <SpriteBatch.h>

namespace Scioto
{
	class Engine
	{
		public:
			Engine(float ContextWidht, float ContextHeight);
			~Engine();
			void Update();
			void Draw();

			Shader* shader;
			Viewport* viewport;
			SpriteBatch* m_spritebatch;
			
			Texture2D* m_backTexture;
			Sprite* m_background;
			Texture2D* m_texture;
			Texture2D* m_texture2;
			Sprite* m_sprites[10000];

			//////////////////////////////////////////////////////// TEMP
		
			//Scioto::tgaHeader header;
			//GLuint Texture;

			//GLfloat* GlProjection;
			//GLfloat* GlTranslation;

			//float position;
			//float sine;


			////amount of vertices for the object
			//unsigned int num_vertices;

			//GLfloat* Data;
			//
			//GLuint VBO, VBO2;
	};
}
#endif